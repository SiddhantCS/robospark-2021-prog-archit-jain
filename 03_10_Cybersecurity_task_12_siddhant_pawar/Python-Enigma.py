#!/usr/bin/env python
# coding: utf-8

# In[ ]:





# In[ ]:


from enigma.machine import EnigmaMachine

# setup machine according to specs from a daily key sheet:
machine = EnigmaMachine.from_key_sheet(
       rotors='I II III',
       reflector='B',
       ring_settings=[1,17,15],
       #ring_settings=[l1(),l2(),l3()],
       plugboard_settings='AV BS CG DL FU HZ IN KM OW RX')

# set machine initial starting position
machine.set_display('WXC')

# decrypt the message key
msg_key = machine.process_text('KCH')

# decrypt the cipher text with the unencrypted message key
machine.set_display(msg_key)

ciphertext = 'DPIWPOLLFEUPIKAKLQLC'
plaintext = machine.process_text(ciphertext)
#DPIWPOLLFEUPIKAKLQLC
#FKYCEPWYRXTXDHYGUPNG

print(plaintext)


# In[ ]:




