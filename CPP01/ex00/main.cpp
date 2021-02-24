/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 16:29:07 by hjung             #+#    #+#             */
/*   Updated: 2021/02/24 21:02:40 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(const char *str)
{
	Pony *pony = new Pony(str);
	delete pony;
}

void	ponyOnTheStack(const char *str)
{
	Pony pony(str);
}

int main(void)
{
	std::cout << "----- ponyOnTheHeap -----" << '\n';
	ponyOnTheHeap("ponyAAA");
	ponyOnTheHeap("ponyBBB");

	std::cout << "----- ponyOnTheStack -----" << '\n';
	ponyOnTheHeap("ponyCCC");
	ponyOnTheHeap("ponyDDD");

	return (0);
}
