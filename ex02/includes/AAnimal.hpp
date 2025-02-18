/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:55:35 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 18:58:47 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class AAnimal {
protected:
  std::string type;

public:
  AAnimal();
  AAnimal(const AAnimal &other);
  AAnimal &operator=(const AAnimal &other);
  virtual ~AAnimal();

  virtual void makeSound() const = 0;
  std::string getType() const;
};
