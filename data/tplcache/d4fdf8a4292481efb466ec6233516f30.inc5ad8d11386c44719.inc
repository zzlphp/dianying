<?php
$z[0]=Array("match","<div id=\"showinfo\">[ÄÚÈİ]</div><ul class=\"mmlist\">",5,80);
$z[1]=Array("trim","<font([^>]*)>",85,132);
$z[1][4]['replace']="";
$z[2]=Array("trim","</font>",134,175);
$z[2][4]['replace']="";
$z[3]=Array("trim","<strong([^>]*)>",177,226);
$z[3][4]['replace']="";
$z[4]=Array("trim","</strong>",228,271);
$z[4][4]['replace']="";
$z[5]=Array("trim","<span([^>]*)>",273,320);
$z[5][4]['replace']="";
$z[6]=Array("trim","</span>",322,363);
$z[6][4]['replace']="";
$z[7]=Array("function","\$rpstr = \"www.piaohua.com\";\r\n\$mystr = \"www.xiaozhizhu.net\";\r\n@me = str_replace(\$rpstr,\$mystr,@me);\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n",368,521);

?>