/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:48:05 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/16 19:55:44 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() {
  std::cout << "WrongAnimal Constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
  type = other.type;
  std::cout << "WrongAnimal Copy Constructor called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
  if (this != &other) {
    type = other.type;
  }
  std::cout << "WrongAnimal Assignment operator called!" << std::endl;
  return *this;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal Destructor called!" << std::endl;
}

void WrongAnimal::makeSound() const {
  std::cout << "Default animal sound..." << std::endl;
}

std::string WrongAnimal::getType() const { return type; }
