/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:42:15 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/16 16:09:04 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal {
public:
  Cat();
  Cat(const Cat &other);
  Cat &operator=(const Cat &other);
  ~Cat();

  void makeSound() const;
};
