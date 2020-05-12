#pragma once

#include "simulation.h"
#include <vector>

namespace corsim
{
    class MovementStrategyInterface
    {
        public:
            virtual int moveSubjects(std::vector<Subject> &subjects, int dt) = 0;
    };
} 