#include "Season.h"

class UReward;

void USeason::AddUnassignedReward(int32 Index, UReward* Reward) {
}

void USeason::AddLevel(int32 Index, UReward* Reward, UReward* specialReward) {
}

USeason::USeason() {
    this->SeasonNumber = 0;
    this->TreeOfVanity = NULL;
    this->SeasonDLC = NULL;
    this->InSeasonZoneEventChanceModifier = 0.00f;
    this->InSeasonMissionChanceModifier = 0.00f;
    this->NumberOfScripChallenges = 0;
    this->SeasonWarning = NULL;
}

