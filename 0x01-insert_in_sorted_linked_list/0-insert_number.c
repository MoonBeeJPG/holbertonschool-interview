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
    listint_t current = *head, listint_t *new_node, listint_t *next_node;

    /* Creating new node */
    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);
    new_node->n = number;
    new_node->next = NULL;

    /* First border case: Empty list*/
    if (!*head)
    {
        *head = new_node;
        return (*head);
    }

    /* Second border case: Insert it as a first node*/
    if ((*head)->n > number)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node)
    }

    /* Normal case: Insert it in a part of a list */
    while (current->next != NULL && current->next->n <= number)
        current = current->next;
    next_node = current->next;
    current->next = new_node;
    new_node->next = next_node;
    return (new_node);