/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:23:28 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/16 20:09:38 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"
#include <iostream>

int main(void) {
  std::cout << "=========NORMAL_TEST==========" << std::endl;
  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  delete meta;
  delete i;
  delete j;
  std::cout << "=========WRONG_TEST==========" << std::endl;
  const WrongAnimal *fakeAnimal = new WrongAnimal();
  const WrongAnimal *fakeCat = new WrongCat();
  std::cout << fakeCat->getType() << " " << std::endl;
  fakeAnimal->makeSound();
  fakeCat->makeSound();
  delete fakeAnimal;
  delete fakeCat;
  return 0;
}
