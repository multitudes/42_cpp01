/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:52:27 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:52:59 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

/*
regarding why use pointers instead of references:
- If the Weapon object's lifetime is guaranteed to exceed the lifetime of 
the Human object, and the Human object doesn't own the Weapon object, 
I could use a reference. This is the case for HumanA in my code
- If the Human object might not have a Weapon at all times, 
I should use a pointer, because pointers can be null. 
This is the case for HumanB. 
- The HumanB object (jim) starts without a Weapon, so a pointer is appropriate.
If the Human object needs to be able to change its Weapon after it's created, 
I should use a pointer. References can't be reassigned to refer to a different 
object after they're initialized.
If an object A "owns" an object B, it means that A is responsible for the 
creation and destruction of B. Typically, A would create B (often in its constructor), 
store a pointer or reference to B, and then destroy B when A itself is 
destroyed (often in its destructor).

Owning a resource... 
the HumanA and HumanB objects don't "own" the Weapon objects because 
they're not responsible for creating or destroying them. The Weapon objects are 
created outside of the HumanA and HumanB objects and passed to them. 
The HumanA and HumanB objects just store a reference or pointer to the Weapon 
objects; they don't control their lifetime.
*/
int main()
{
	{	
		Weapon club = Weapon("crude spiked club");
		
		HumanA bob = HumanA("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		
		HumanB jim = HumanB("Jim");
		
		// jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0); 
}
