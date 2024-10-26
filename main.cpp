#include <iostream>

#include "board.hpp"
#include "console.hpp"
#include "game_state.hpp"
#include "game.hpp"
#include "human_player.hpp"


int main()
{
  Board board;
  GameState game_state(&board);
  Console console(&board);
  HumanPlayer player_one(&board, 'X');
  HumanPlayer player_two(&board, 'O');

  while (game_state.current_state() == "in-progress")
  {
    std::cout << console.display();
    player_one.get_move();
    player_two.get_move();
  }
}