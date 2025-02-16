/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:42:13 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/16 16:08:58 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat() {
  type = "Cat";
  std::cout << "Cat Constructor called!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
  std::cout << "Cat Copy Constructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
  if (this != &other) {
    Animal::operator=(other);
  }
  std::cout << "Cat Assignment Operator called!" << std::endl;
  return *this;
}

Cat::~Cat() { std::cout << "Cat Destructor called!" << std::endl; }

void Cat::makeSound() const { std::cout << "Meow! Meow!" << std::endl; }
