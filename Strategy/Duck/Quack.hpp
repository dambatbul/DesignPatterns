/*
 * =====================================================================================
 *
 *       Filename:  Quack.hpp
 *
 *    Description:  head first ch1 example - duck model(Strategy Pattern)
 *
 *        Version:  0.1
 *        Created:  2015년 10월 17일 20시 48분 15초
 *       Revision:  none
 *       Compiler:  g++
 *
 * =====================================================================================
 */

#include <QuackBehavior.hpp>


namespace HeadFirstDesignPatterns {
	namespace Strategy {
		/*
		 * =====================================================================================
		 *        Class:  Quack
		 *  Description:  
		 * =====================================================================================
		 */
		class Quack : public QuackBehavior
		{
			public:
				/* ====================  OPERATORS     ======================================= */
				virtual void quack() {
					std::cout << "Quack!! Quack!!" << std::endl;
				}

		}; /* -----  end of class Quack  ----- */

	}		/* -----  end of namespace Strategy  ----- */
}		/* -----  end of namespace HeadFirstDesignPatterns  ----- */
