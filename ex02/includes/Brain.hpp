/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:13:35 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 18:15:49 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Brain {
private:
  std::string ideas[100];

public:
  Brain();
  Brain(const Brain &other);
  Brain &operator=(const Brain &other);
  ~Brain();
};
