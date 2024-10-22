    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete(temp->next);
    temp->next = NULL;