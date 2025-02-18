/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:42:15 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 19:04:53 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
  Brain *brain;

public:
  Cat();
  Cat(const Cat &other);
  Cat &operator=(const Cat &other);
  ~Cat();

  void makeSound() const;
};
