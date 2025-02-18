/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:23:28 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 19:13:17 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include <iostream>

int main(void) {
  AAnimal *a1 = new Dog();
  AAnimal *a2 = new Cat();

  std::cout << a1->getType() << std::endl;
  std::cout << a2->getType() << std::endl;
  a1->makeSound();
  a2->makeSound();

  delete a1;
  delete a2;
  return 0;
}
