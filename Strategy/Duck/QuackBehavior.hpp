/*
 * =====================================================================================
 *
 *       Filename:  QuackBehavior.hpp
 *
 *    Description:  head first ch1 example - Duck model(Strategy Pattern)
 *
 *        Version:  0.1
 *        Created:  2015년 10월 14일 22시 32분 22초
 *       Revision:  none
 *       Compiler:  g++
 *
 * =====================================================================================
 */
#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIOR_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIOR_HPP_

namespace HeadFirstDesignPatterns {
	namespace Strategy {
		/*
		 * =====================================================================================
		 *        Class:  QuackBehavior
		 *  Description:  
		 * =====================================================================================
		 */
		class QuackBehavior
		{
			public:
				/* ====================  OPERATORS     ======================================= */
				virtual void quack() = 0;

		}; /* -----  end of class QuackBehavior  ----- */

	}		/* -----  end of namespace Strategy  ----- */
}		/* -----  end of namespace HeadFirstDesignPatterns  ----- */

#endif
