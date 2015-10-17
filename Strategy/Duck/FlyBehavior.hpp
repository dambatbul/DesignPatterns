/*
 * =====================================================================================
 *
 *       Filename:  FlyBehaior.hpp
 *
 *    Description:  head first ch1 example - Duck model(Strategy Pattern)
 *
 *        Version:  0.1
 *        Created:  2015년 10월 14일 22시 28분 40초
 *       Revision:  none
 *       Compiler:  g++
 *
 * =====================================================================================
 */

#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_FLY_BEHAVIOR_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_FLY_BEHAVIOR_HPP_


namespace HeadFirstDesignPatterns {
	namespace Strategy {
		/*
		 * =====================================================================================
		 *        Class:  FlyBehavior
		 *  Description:  
		 * =====================================================================================
		 */
		class FlyBehavior
		{
			public:
				/* ====================  OPERATORS     ======================================= */
				virtual void fly() = 0;

		}; /* -----  end of class FlyBehavior  ----- */

	}		/* -----  end of namespace Strategy  ----- */
}		/* -----  end of namespace HeadFirstDesignPatterns  ----- */

#endif
