/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 22:59:03 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/27 00:10:22 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default") {
  _hitpoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  std::cout << PURPLE "ScavTrap default constructor called." \
            << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
  std::cout << PURPLE "ScavTrap copy constructor called." \
            << RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
  std::cout << PURPLE "ScavTrap assignation operator called." \
            << RESET << std::endl;
  if (this != &other) {
    _name = other._name;
    _hitpoints = other._hitpoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
  }
  return *this;
}

ScavTrap::ScavTrap(const std::string& newName) : ClapTrap(newName) {
  _hitpoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  std::cout << PURPLE "ScavTrap constructor for " << _name \
            << " called." << RESET << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << PURPLE "ScavTrap destructor for " << _name \
            << " called." << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "\n";
  if (_energyPoints > 0) {
    std::cout << PURPLE "ScavTrap " << _name << ATTACKS \
      << target << ", causing " << _attackDamage \
      << " points of damage!" << std::endl;
    _energyPoints --;
  } else {
    std::cout << PURPLE "ScavTrap " << _name << RESET \
    << " is too tired to attack!" << std::endl;
    std::cout << PURPLE "ScavTrap " << _name << RESET \
    << " will go take a nap." << std::endl;
  }
}
void ScavTrap::guardGate() {
  std::cout << PURPLE "ScavTrap " << _name \
            << RESET << " has entered in " \
            << "\033[1;96mGatekeeper Mode🛡️\n" \
            << RESET << std::endl;
}