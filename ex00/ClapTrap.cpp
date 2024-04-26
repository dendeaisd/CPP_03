/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:42:48 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/27 00:15:17 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitpoints(10), \
                    _energyPoints(10), _attackDamage(0) {
  std::cout << CYAN "ClapTrap default constructor called." \
            << RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string& newName) : _name(newName), \
           _hitpoints(10), _energyPoints(10), _attackDamage(0){
  std::cout << CYAN "ClapTrap constructor for " << _name \
            << " called." << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
  std::cout << CYAN "ClapTrap copy constructor called." \
            << RESET << std::endl;
  *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  std::cout << CYAN "ClapTrap assignation operator called." \
            << RESET << std::endl;
  if (this != &other) {
    _name = other._name;
    _hitpoints = other._hitpoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
  }
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << CYAN "ClapTrap destructor for "<< _name \
            << " called." << RESET << std::endl;
}

int ClapTrap::getEnergyPoints() const {
  return _energyPoints;
}

void ClapTrap::attack(const std::string& target) {
  std::cout << "\n";
  if (_energyPoints > 0) {
    std::cout << CYAN "ClapTrap " << _name << ATTACKS \
      << target << ", causing " << _attackDamage \
      << " points of damage!" << std::endl;
    _energyPoints --;
  } else {
    std::cout << CYAN "ClapTrap " << _name << RESET \
    << " is too tired to attack!" << std::endl;
    std::cout << CYAN "ClapTrap " << _name << RESET \
    << " will go take a nap." << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "\n";
  std::cout << CYAN "ClapTrap " << _name << TAKES \
    << amount << " damage points!"<< std::endl;
  _hitpoints -= amount;
  if (_hitpoints <= 0) {
    _hitpoints = 0;
    std::cout << CYAN "ClapTrap " << _name << RESET \
              << " is already dead." << std::endl;
    std::cout << "Why are you stil hitting" << CYAN \
              " ClapTrap " << _name << RESET <<\
              "?" << std::endl;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  std::cout << "\n";
  if ( _energyPoints > 0 && _hitpoints > 0) {
  std::cout << "So you tought you can defeat" \
  << " ClapTrap " << _name << "?" << std::endl;
  std::cout << "Think again!" << std::endl;
  std::cout <<  CYAN "ClapTrap " << _name << \
      REPAIRS << " for " << amount \
      << " points!" << std::endl;
  _hitpoints += amount;
  _energyPoints --;
  } else {
    std::cout << CYAN "ClapTrap " << _name << \
        RESET << " is really dead this time." \
        << std::endl;
  }
}
