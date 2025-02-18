/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:45:59 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 18:35:02 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog() {
  type = "Dog";
  brain = new Brain();
  std::cout << "Dog Constructor called!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
  brain = new Brain(*other.brain);
  std::cout << "Dog Copy Constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
  if (this != &other) {
    Animal::operator=(other);
    delete brain;
    brain = new Brain(*other.brain);
  }
  std::cout << "Dog Assignment Operator called!" << std::endl;
  return *this;
}

Dog::~Dog() {
  delete brain;
  std::cout << "Dog Destructor called!" << std::endl;
}

void Dog::makeSound() const { std::cout << "Woof! Woof!" << std::endl; }
