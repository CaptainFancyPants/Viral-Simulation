#pragma once

#include "MovementStrategyInterface.h"


namespace corsim
{
    class RegularMovement: public MovementStrategyInterface
    {
        public:
            int moveSubjects(std::vector<Subject> &subjects, int dt);
    };

} 