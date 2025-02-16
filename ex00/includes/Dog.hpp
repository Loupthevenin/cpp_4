/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:46:11 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/16 16:09:14 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal {
public:
  Dog();
  Dog(const Dog &other);
  Dog &operator=(const Dog &other);
  ~Dog();

  void makeSound() const;
};
