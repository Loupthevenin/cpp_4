/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:42:13 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 18:31:50 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat() {
  type = "Cat";
  brain = new Brain();
  std::cout << "Cat Constructor called!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
  brain = new Brain(*other.brain);
  std::cout << "Cat Copy Constructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
  if (this != &other) {
    Animal::operator=(other);
    delete brain;
    brain = new Brain(*other.brain);
  }
  std::cout << "Cat Assignment Operator called!" << std::endl;
  return *this;
}

Cat::~Cat() {
  delete brain;
  std::cout << "Cat Destructor called!" << std::endl;
}

void Cat::makeSound() const { std::cout << "Meow! Meow!" << std::endl; }
