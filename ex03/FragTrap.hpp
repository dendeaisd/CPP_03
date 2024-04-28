/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 00:26:32 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/27 00:31:06 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
  FragTrap();
  FragTrap(const std::string& newName);
  FragTrap(const FragTrap& other);
  FragTrap& operator=(const FragTrap& other);
  ~FragTrap();
  void attack(const std::string& target);
  void highFivesGuys();
};

#endif