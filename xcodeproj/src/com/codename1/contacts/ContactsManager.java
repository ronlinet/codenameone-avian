/*
 * Copyright (c) 2012, Codename One and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Codename One designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Oracle in the LICENSE file that accompanied this code.
 *  
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 * 
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 * 
 * Please contact Codename One through http://www.codenameone.com/ if you 
 * need additional information or have any questions.
 */
package com.codename1.contacts;

import com.codename1.ui.Display;
import java.util.Vector;

/**
 * This class uses as the Contacts manager of the device, it enables the possibility
 * To get the Contacts that are available on the device.
 *
 * @author Chen
 */
public class ContactsManager {
    
    /**
     * This method returns all contacts IDs 
     * @return array of contacts IDs
     */
    public static String [] getAllContacts(){
        return Display.getInstance().getAllContacts(false);
    }
    
    /**
     * This method returns all contacts that has a phone number
     * @return array of contacts IDs
     */
    public static String [] getAllContactsWithNumbers(){
        return Display.getInstance().getAllContacts(true);
    }
    
    /**
     * This method returns a Contact by the contact id
     * @param id of the Contact
     * @return a Contact Object
     */
    public static Contact getContactById(String id){
        return Display.getInstance().getContactById(id);
    }
}