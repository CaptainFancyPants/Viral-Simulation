#pragma once
#include <vector>
#include "subject.h"

namespace corsim {

	class MovementStrategyInterface {
		public:
			virtual int MoveSubjects(std::vector<Subject> &subjects, int dt, int counter) = 0;
	};
}