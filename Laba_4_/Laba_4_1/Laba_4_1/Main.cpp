﻿
/*Написать простой консольный вариант карточной игры BlackJack для игры один - наодин с дилером, в соответствии с вариантом.
 В приложении А приведены вариации и особенности правил игры для каждого варианта.В ходе работы необходимо сделать
 как минимум следующее :
--> создать и связать отношением агрегации / композиции и / или наследования классы КАРТА, КОЛОДА, ДИЛЕР, ИГРОК, ИГРА.
	В целом, Вы можете предлагать здесь свои варианты объектно - ориентированного проектирования;
--> в начале игры генерировать случайным образом 4 колоды с 36 или 52 картами, в зависимости от варианта;
--> имитировать действия дилера, в соответствии с вариантом игры;
--> запрограммировать обработку всех потенциально возможных вариантов исхода : блек - джек, перебор,
	выигрыш по очкам, проигрыш по очкам;
--> бросать и отлавливать исключение при «переборе»(«перебор» рассматривать как исключительную ситуацию);
--> перегрузить операцию потокового вывода объекта класса карты на экран с
	помощью дружественной функции.Выводить карту в виде 2♠, Q♦ и т.д. */

	/*Реализуйте паттерн GOF «Адаптер» в обоих видах (адаптер класса и адаптер объекта)
	на следующем примере. Напишите интерфейс IFormattable с методом std::string
	format() для форматирования объекта, реализующего данный интерфейс, а также
	функцию void prettyPrint(const IFormattable& object), которая выводит на
	экран объект-параметр в отформатированном виде. Сделайте так, чтобы в эту
	функцию можно было передавать ссылку на Вашу колоду карт*/

	// Вариант № 4: Максимум карт; европейский; Саррендер

#include <iostream>
#include <time.h>
#include <conio.h>

#include "Game.h"
#include "Deck.h"
#include "IFormattable.h"
#include "Adapter.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	Game* game = new Game();
	game->play();
	delete game;

	IFormattable* adapter = new Adapter();
	Deck deck;
	adapter->prettyPrint(deck);

	delete adapter;

	_getch;
	return 0;
}