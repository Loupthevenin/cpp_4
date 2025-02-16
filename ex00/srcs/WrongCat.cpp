/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:48:52 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/16 20:01:52 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
  type = "WrongCat";
  std::cout << "WrongCat Constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
  std::cout << "WrongCat Copy Constructor called!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
  if (this != &other) {
    WrongAnimal::operator=(other);
  }
  std::cout << "WrongCat Assignment operator called!" << std::endl;
  return *this;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat Destructor called!" << std::endl;
}

void WrongCat::makeSound() const {
  std::cout << "WrongCat: Meow! Meow!" << std::endl;
}
