<?php
$z[0]=Array("field","",183,202);
$z[0][4]['name']="title";
$z[1]=Array("global","",209,235);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",260,289);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",326,384);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",625,660);
$z[4][4]['filename']="head.htm";
$z[5]=Array("global","",838,893);
$z[5][4]['name']="keyword";
$z[5][4]['function']="RemoveXSS(@me)";
$z[6]=Array("pagelist","",944,1015);
$z[6][4]['listitem']="info,index,end,pre,next,pageno";
$z[6][4]['listsize']="3";
$z[7]=Array("list","\r\n				<dl>\r\n					<dt>\r\n					<a class=\"img\" href=\"[field:arcurl/]\" target=\"_blank\">\r\n					<img alt=\"[field:title/]\" border=\"0\" height=\"150\" src=\"[field:litpic/]\" width=\"120\"></a></dt>\r\n					<dd><strong><a href=\"[field:arcurl/]\">[field:title/]</a></strong><p>\r\n					[field:description/]...</p>\r\n					<span>更新时间：[field:pubdate function=\"GetDateMK(@me)\"/]&nbsp;&nbsp;\r\n					<a href=\"[field:arcurl/]\">点击下载</a></span></dd>\r\n				</dl>\r\n			 ",1056,1549);
$z[7][4]['pagesize']="14";
$z[7][4]['titlelen']="24";
$z[8]=Array("pagelist","",1628,1699);
$z[8][4]['listitem']="info,index,end,pre,next,pageno";
$z[8][4]['listsize']="3";
$z[9]=Array("include","",2041,2078);
$z[9][4]['filename']="footer.htm";

?>