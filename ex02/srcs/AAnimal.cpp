/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:55:26 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 18:58:50 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() { std::cout << "AAnimal Constructor called!" << std::endl; }

AAnimal::AAnimal(const AAnimal &other) {
  type = other.type;
  std::cout << "AAnimal Copy Constructor called!" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
  if (this != &other) {
    type = other.type;
  }
  std::cout << "AAnimal Assignment operator called!" << std::endl;
  return *this;
}

AAnimal::~AAnimal() { std::cout << "AAnimal Destructor called!" << std::endl; }

void AAnimal::makeSound() const {
  std::cout << "Default aanimal sound..." << std::endl;
}

std::string AAnimal::getType() const { return type; }
