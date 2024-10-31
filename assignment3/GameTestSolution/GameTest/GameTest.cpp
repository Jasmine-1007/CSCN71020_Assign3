#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" char* game(char* Player1, char* Player2);

namespace GameTest
{
	TEST_CLASS(GameTest)
	{
	public:
		
		TEST_METHOD(Test1_player1)
		{
			char* answer = "Player1";

			Assert::AreEqual(answer, game("Paper", "Rock"));
			Assert::AreEqual(answer, game("Rock", "Scissors"));
			Assert::AreEqual(answer, game("Scissors", "Paper"));
		}


		TEST_METHOD(Test1_player2)
		{
			char* answer = "Player2";

			Assert::AreEqual(answer, game("Rock", "Paper"));
			Assert::AreEqual(answer, game("Scissors", "Rock"));
			Assert::AreEqual(answer, game("Paper", "Scissors"));
		}


		TEST_METHOD(Test1_draw)
		{
			char* answer = "Draw";

			Assert::AreEqual(answer, game("Paper", "Paper"));
			Assert::AreEqual(answer, game("Rock", "Rock"));
			Assert::AreEqual(answer, game("Scissors", "Scissors"));
		}


		TEST_METHOD(Test1_invalid)
		{
			char* answer = "Invalid";

			Assert::AreEqual(answer, game("paper", "rock"));
			Assert::AreEqual(answer, game("Rock", "scissors"));
			Assert::AreEqual(answer, game("1", "2"));
		}
	};
}
