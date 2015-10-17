/*
 * =====================================================================================
 *
 *       Filename:  app.cpp
 *
 *    Description:  main app
 *
 *        Version:  0.1
 *        Created:  2015년 10월 14일 23시 20분 14초
 *       Revision:  none
 *       Compiler:  gcc
 *
 * =====================================================================================
 */

#include <Duck.hpp>
#include <FlyBehavior.hpp>
#include <QuackBehavior.hpp>

#include <ModelDuck.hpp>
#include <RubberDuck.hpp>

#include <FlyRocketPowered.hpp>
#include <FakeQuack.hpp>

#include	<stdlib.h>


using namespace HeadFirstDesignPatterns::Strategy;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{

	RubberDuck rubberDuckie;
	rubberDuckie.display();
	rubberDuckie.performFly();
	rubberDuckie.performQuack();
	rubberDuckie.swim();

	ModelDuck model;
	model.display();
	model.performFly();
	model.performQuack();
	model.swim();
	model.setFlyBehavior(new FlyRocketPowered());
	model.performFly();
	model.setQuackBehavior(new FakeQuack());
	model.performQuack();

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
