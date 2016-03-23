#include "WindVaneController.h"
#include "utility/Utility.h"

#include <iostream>

WindVaneController::WindVaneController() {

}

void WindVaneController::setVaneAngle(double trueWindDirection, double courseToSteer) {
	m_vaneAngle = Utility::limitAngleRange(trueWindDirection - courseToSteer);
}

double WindVaneController::getVaneAngle() {
	return m_vaneAngle;
}

