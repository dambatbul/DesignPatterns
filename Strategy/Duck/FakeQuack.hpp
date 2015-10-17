/*
 * =====================================================================================
 *
 *       Filename:  FakeQuack.hpp
 *
 *    Description:  head first ch1 example - Duck model(Strategy Pattern)
 *
 *        Version:  0.1
 *        Created:  2015년 10월 14일 23시 11분 41초
 *       Revision:  none
 *       Compiler:  g++
 *
 * =====================================================================================
 */
#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_FAKE_QUACK_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_FAKE_QUACK_HPP_

#include <iostream>
#include <QuackBehavior.hpp>


namespace HeadFirstDesignPatterns {
	namespace Strategy {

		/*
		 * =====================================================================================
		 *        Class:  FakeQuack
		 *  Description:  
		 * =====================================================================================
		 */
		class FakeQuack: public QuackBehavior
		{
			public:
				/* ====================  METHODS       ======================================= */
				virtual void quack() { std::cout << "QQQQ~~~~" << std::endl; }

		}; /* -----  end of class FakeQuack  ----- */


	}		/* -----  end of namespace Strategy  ----- */
}		/* -----  end of namespace HeadFirstDesignPatterns  ----- */

#endif
