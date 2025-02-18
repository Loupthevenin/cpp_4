/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:13:24 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 18:29:31 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"
#include <iostream>

Brain::Brain() { std::cout << "Brain Constructor called!" << std::endl; }

Brain::Brain(const Brain &other) {
  int i;

  std::cout << "Brain Copy Constructor called!" << std::endl;
  i = 0;
  while (i < 100) {
    ideas[i] = other.ideas[i];
    i++;
  }
}

Brain &Brain::operator=(const Brain &other) {
  int i;

  if (this != &other) {
    while (i < 100) {
      ideas[i] = other.ideas[i];
      i++;
    }
  }
  std::cout << "Brain Assignment called!" << std::endl;
  return *this;
}

Brain::~Brain() { std::cout << "Brain Destructor called!" << std::endl; }
