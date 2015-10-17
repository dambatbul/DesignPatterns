/*
 * =====================================================================================
 *
 *       Filename:  Duck.hpp
 *
 *    Description:  head first ch1 example - duck model(Strategy Pattern)
 *
 *        Version:  0.1
 *        Created:  2015년 10월 14일 21시 57분 57초
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  dambatbul@gmail.com
 *
 * =====================================================================================
 */

#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_DUCK_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_DUCK_HPP_

#include <iostream>

#include <FlyBehavior.hpp>
#include <QuackBehavior.hpp>

namespace HeadFirstDesignPatterns {
	namespace Strategy {

		/*
		 * =====================================================================================
		 *        Class:  Duck
		 *  Description:  
		 * =====================================================================================
		 */
		class Duck
		{
			protected:
				FlyBehavior* flyBehavior;
				QuackBehavior* quackBehavior;
				Duck() : flyBehavior(0), quackBehavior(0) {}
		
			public:
			   virtual void setFlyBehavior(FlyBehavior *fb) { flyBehavior = fb; }
			   virtual void setQuackBehavior(QuackBehavior *qb) { quackBehavior = qb;}
			   virtual void performFly() { flyBehavior->fly(); }
			   virtual void performQuack() { quackBehavior->quack(); }
		
			   virtual void swim() { std::cout << "All Duck float, even decoys!" << std::endl; }
		
			   virtual void display() = 0;
		}; /* -----  end of class Duck  ----- */

	}		/* -----  end of namespace Strategy  ----- */

}		/* -----  end of namespace HeadFirstDesignPatterns  ----- */


#endif
