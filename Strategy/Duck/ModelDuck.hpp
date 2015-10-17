/*
 * =====================================================================================
 *
 *       Filename:  ModelDuck.hpp
 *
 *    Description:  head first ch1 example - duck model(Strategy Pattern)
 *
 *        Version:  0.1
 *        Created:  2015년 10월 17일 20시 43분 40초
 *       Revision:  none
 *       Compiler:  g++
 *
 * =====================================================================================
 */

#include <Duck.hpp>
#include <Quack.hpp>
#include <FlyNoWay.hpp>


namespace HeadFirstDesignPatterns {
	namespace Strategy {


		/*
		 * =====================================================================================
		 *        Class:  ModelDuck
		 *  Description:  
		 * =====================================================================================
		 */
		class ModelDuck : public Duck
		{
			public:
				/* ====================  LIFECYCLE     ======================================= */
				ModelDuck ()                             /* constructor */
				{
					quackBehavior = new Quack();
					flyBehavior = new FlyNoWay();
				}

				virtual void display() {
					std::cout << "I'm a model duck" << std::endl;
				}

				/* ====================  OPERATORS     ======================================= */

		}; /* -----  end of class ModelDuck  ----- */

	}		/* -----  end of namespace Strategy  ----- */
}		/* -----  end of namespace HeadFirstDesignPatterns  ----- */

