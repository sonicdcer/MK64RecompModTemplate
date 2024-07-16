#include "modding.h"
#include "recomputils.h"
#include "recompconfig.h"

#include "common_structs.h"
#include "kart_attributes.h"
#include "player_controller.h"

RECOMP_PATCH void kart_hop(Player* player) {
    player->kartHopJerk = gKartHopJerkTable[player->characterId];
    player->kartHopAcceleration = 0.0f;
    player->kartHopVelocity = gKartHopInitialVelocityTable[player->characterId] * 10.0f;
    player->effects |= 2;
    player->unk_DAC = 3.0f;
    player->kartGravity = 500.0f * 0.1f;
    func_80036C5C(player);
}