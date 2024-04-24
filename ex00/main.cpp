/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:49:26 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/24 19:39:38 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("1");
    claptrap.attack("target");
    claptrap.takeDamage(10);
    claptrap.beRepaired(1);
    claptrap.takeDamage(2);
    return 0;
}