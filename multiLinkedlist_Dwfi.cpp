void add_fn_Node(LIST* list, NODE* pnew_stu) {

    NODE* temp = list->fn_head;

    if( list->fn_head == NULL ) {

            pnew_stu->fn_next = list->fn_head;
            pnew_stu->fn_pre = list->fn_head;


            list->fn_head = pnew_stu;

            list->fn_count = 1;

            return;

        }

        else {

            temp = list->fn_head;

            if ( (strcmp( pnew_stu->first_name, temp->first_name )) <= 0 ) { // Condition for add before the first node

                pnew_stu->fn_next = temp;
                pnew_stu->fn_pre = temp->fn_pre;
                temp->fn_pre = pnew_stu;

                list->fn_head = pnew_stu;

                list->fn_count++;

                return;

            }

            else {
                
                 while ( temp->fn_next != NULL ) { // Condition for add middle

                        if ( (strcmp( pnew_stu->first_name, temp->first_name ) >= 0 ) && (strcmp( pnew_stu->first_name, temp->fn_next->first_name) < 0)) {

                        pnew_stu->fn_next = temp->fn_next;
                        pnew_stu->fn_pre = temp;
                        temp->fn_next->fn_pre = pnew_stu;
                        temp->fn_next = pnew_stu;

                        list->fn_count++;

                        return;
                    }

                        temp = temp->fn_next;

                    }

                if ( temp->fn_next == NULL ) { // Condition for add to end

                    temp->fn_next = pnew_stu;
                    pnew_stu->fn_pre = temp;
                    pnew_stu->fn_next = NULL;

                    list->fn_tail = pnew_stu;

                    list->fn_count++;

                    return;

                }
            }

        }
}

void add_ln_Node(LIST* list, NODE* pnew_stu) {

    NODE* temp = list->ln_head;

    if( list->ln_head == NULL ) {

            pnew_stu->ln_next = list->ln_head;
            pnew_stu->ln_pre = list->ln_head;


            list->ln_head = pnew_stu;

            list->ln_count = 1;

            return;

        }

        else {

            temp = list->ln_head;

            if ( (strcmp( pnew_stu->last_name, temp->last_name )) <= 0 ) { // Condition for add before the first node

                pnew_stu->ln_next = temp;
                pnew_stu->ln_pre = temp->ln_pre;
                temp->ln_pre = pnew_stu;

                list->ln_head = pnew_stu;

                list->ln_count++;

                return;

            }

            else {


                 while ( temp->ln_next != NULL ) { //Condition for add middle

                        if ( (strcmp( pnew_stu->last_name, temp->last_name ) >= 0 ) && (strcmp( pnew_stu->last_name, temp->ln_next->last_name) < 0)) {

                        pnew_stu->ln_next = temp->ln_next;
                        pnew_stu->ln_pre = temp;
                        temp->ln_next->ln_pre = pnew_stu;
                        temp->ln_next = pnew_stu;
                        
                        list->ln_count++;

                        return;
                    }

                        temp = temp->ln_next;

                    }

                if ( temp->ln_next == NULL ) { // Condition for add to end

                    temp->ln_next = pnew_stu;
                    pnew_stu->ln_pre = temp;
                    pnew_stu->ln_next = NULL;

                    list->ln_tail = pnew_stu;

                    list->ln_count++;

                    return;

                }
            }

        }
}

	
