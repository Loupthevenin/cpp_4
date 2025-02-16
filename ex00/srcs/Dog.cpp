/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:45:59 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/16 16:10:24 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog() {
  type = "Dog";
  std::cout << "Dog Constructor called!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
  type = other.type;
  std::cout << "Dog Copy Constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
  if (this != &other) {
    Animal::operator=(other);
  }
  std::cout << "Dog Assignment Operator called!" << std::endl;
  return *this;
}

Dog::~Dog() { std::cout << "Dog Destructor called!" << std::endl; }

void Dog::makeSound() const { std::cout << "Woof! Woof!" << std::endl; }
