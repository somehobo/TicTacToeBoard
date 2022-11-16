/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} 
		virtual ~TicTacToeBoardTest(){} 
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, toggle_single_turn) {
	TicTacToeBoard myobj;
	Piece turn = myobj.toggleTurn();
	ASSERT_EQ(turn, O);
}


TEST(TicTacToeBoardTest, toggle_multi_turn) {
	TicTacToeBoard myobj;
	Piece turn = myobj.toggleTurn();
	ASSERT_EQ(turn, O);
	turn = myobj.toggleTurn();
	ASSERT_EQ(turn, X);
}


