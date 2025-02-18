/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:23:28 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 18:41:32 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include <iostream>

int main(void) {
  int size = 4;
  Animal *animals[size];
  int i;

  i = 0;
  std::cout << "==========Creating animals==========" << std::endl;
  while (i < size) {
    if (i < size / 2)
      animals[i] = new Dog();
    else
      animals[i] = new Cat();
    i++;
  }
  std::cout << "==========Making Sound==========" << std::endl;
  i = 0;
  while (i < size) {
    animals[i]->makeSound();
    i++;
  }
  std::cout << "==========Deleting animals==========" << std::endl;
  i = 0;
  while (i < size) {
    delete animals[i];
    i++;
  }
  return 0;
}
