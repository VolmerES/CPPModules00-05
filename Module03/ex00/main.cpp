/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:14:00 by volmer            #+#    #+#             */
/*   Updated: 2025/05/30 18:18:12 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include "ClapTrap.hpp"

int main() {
	std::cout << "----- TEST 1: Constructores y operador de asignación -----" << std::endl;
	ClapTrap bot1("JuanBot");
	ClapTrap bot2("CopyBot");
	ClapTrap bot3;

	bot3 = bot1; // operador de asignación
	ClapTrap bot4(bot2); // constructor de copia

	std::cout << "\n----- TEST 2: Ataque con energía y vida -----" << std::endl;
	bot1.attack("EnemigoFinal");

	std::cout << "\n----- TEST 3: Ataque sin energía -----" << std::endl;
	for (int i = 0; i < 11; ++i) {
		bot2.attack("ObjetivoDummy");
	}

	std::cout << "\n----- TEST 4: Daño recibido -----" << std::endl;
	bot1.takeDamage(3);  // daño normal
	bot1.takeDamage(20); // daño excesivo

	std::cout << "\n----- TEST 5: Reparación con energía -----" << std::endl;
	bot3.beRepaired(5);

	std::cout << "\n----- TEST 6: Reparación sin energía -----" << std::endl;
	for (int i = 0; i < 10; ++i) {
		bot3.attack("Agotador");
	}
	bot3.beRepaired(3); // no debería poder

	std::cout << "\n----- TEST 7: Reparación estando muerto -----" << std::endl;
	bot1.takeDamage(10); // ya estaba bajo, lo rematamos
	bot1.beRepaired(5); // no debería poder

	std::cout << "\n----- FIN DE PRUEBAS -----" << std::endl;
	return 0;
}