#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - insert a number into a sorted singly linked list
 * @head: double pointer to head of list
 * @number: numer to insert
 * Return: adress of the new node or null if it failed
 */

 listint_t *insert_node(listint_t **head, int number);