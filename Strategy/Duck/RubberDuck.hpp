/*
 * =====================================================================================
 *
 *       Filename:  RubberDuck.hpp
 *
 *    Description:  head first ch1 example - Duck model(Strategy Pattern)
 *
 *        Version:  0.1
 *        Created:  2015년 10월 14일 22시 39분 54초
 *       Revision:  none
 *       Compiler:  g++
 *
 * =====================================================================================
 */
#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_RUBBER_DUCK_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_RUBBER_DUCK_HPP_

#include <iostream>

#include <Duck.hpp>
#include <FlyNoWay.hpp>
#include <Squeak.hpp>


namespace HeadFirstDesignPatterns {
	namespace Strategy {

		/*
		 * =====================================================================================
		 *        Class:  RubberDuck
		 *  Description:  
		 * =====================================================================================
		 */
		class RubberDuck : public Duck
		{
			public:
				/* ====================  LIFECYCLE     ======================================= */
				RubberDuck ()                             /* constructor */
				{
					flyBehavior = new FlyNoWay();
					quackBehavior = new Squeak(); 
				}
				/* ====================  MUTATORS      ======================================= */
				virtual void display() {
					std::cout << "I;m a rubber duck" << std::endl;
				}
		}; /* -----  end of class RubberDuck  ----- */

	}		/* -----  end of namespace Strategy  ----- */
}		/* -----  end of namespace HeadFirstDesignPatterns  ----- */




#endif
