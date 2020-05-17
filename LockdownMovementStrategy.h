#pragma once

#include "MovementStrategyInterface.h"

namespace corsim {

    class LockdownMovementStrategy : public MovementStrategyInterface {
        public:
            int MoveSubjects(std::vector<Subject>& subjects, int dt, int counter);
    };
}