/*
 * =====================================================================================
 *
 *       Filename:  FlyRocketPowered.hpp
 *
 *    Description:  head first ch1 example - Duck model(Strategy Pattern)
 *
 *        Version:  0.1
 *        Created:  2015년 10월 14일 22시 44분 05초
 *       Revision:  none
 *       Compiler:  g++
 *
 * =====================================================================================
 */
#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_FLY_ROCKET_POWERED_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_FLY_ROCKET_POWERED_HPP_

#include <iostream>
#include <FlyBehavior.hpp>

namespace HeadFirstDesignPatterns {
	namespace Strategy {
		/*
		 * =====================================================================================
		 *        Class:  FlyRocketPowered
		 *  Description:  
		 * =====================================================================================
		 */
		class FlyRocketPowered : public FlyBehavior
		{
			public:
				/* ====================  OPERATORS     ======================================= */
				virtual void fly() { std::cout << "I am flying with a rocket" << std::endl; }


		}; /* -----  end of class FlyRocketPowered  ----- */

	}		/* -----  end of namespace Strategy  ----- */
}		/* -----  end of namespace HeadFirstDesignPatterns  ----- */

#endif
