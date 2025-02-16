/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:21:19 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/16 16:08:27 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <iostream>

Animal::Animal() { std::cout << "Animal Constructor called!" << std::endl; }

Animal::Animal(const Animal &other) {
  type = other.type;
  std::cout << "Animal Copy Constructor called!" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
  if (this != &other) {
    type = other.type;
  }
  std::cout << "Animal Assignment operator called!" << std::endl;
  return *this;
}

Animal::~Animal() { std::cout << "Animal Destructor called!" << std::endl; }

void Animal::makeSound() const {
  std::cout << "Default animal sound..." << std::endl;
}

std::string Animal::getType() const { return type; }
