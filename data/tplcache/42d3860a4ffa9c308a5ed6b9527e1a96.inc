{dede:sppage sptype='full' srul='1' erul='5'}{/dede:sppage}
{dede:previewurl}http://www.piaohua.com/html/zhanzheng/2012/0505/24278.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<title>[内容]</title>{/dede:match}
   {dede:trim replace=""}_迅雷下载_免费下载_飘花电影网{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='writer' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='source' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='pubdate' value='' isunit='' isdown=''}
   {dede:match}发布时间：[内容]<br/>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}<div id="showinfo">[内容]下载地址{/dede:match}
   {dede:trim replace=""}<a([^>]*)>{/dede:trim}
{dede:trim replace=""}</a>{/dede:trim}
{dede:trim replace=""}<font([^>]*)>{/dede:trim}
{dede:trim replace=""}</font>{/dede:trim}
{dede:trim replace=""}<div([^.]*)>{/dede:trim}
{dede:trim replace=""}</div>{/dede:trim}
{dede:trim replace=""}<strong([^>]*)>{/dede:trim}
{dede:trim replace=""}</strong>{/dede:trim}
{dede:trim replace=""}<span([^>]*)>{/dede:trim}
{dede:trim replace=""}</span>{/dede:trim}
{dede:trim replace=""}[{/dede:trim}
{dede:trim replace=""}【{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='xiazai' value='' isunit='' isdown=''}
   {dede:match}href="ft[内容]">{/dede:match}
   
   {dede:function}@me=str_replace('p://','ftp://',@me); 
{/dede:function}
{/dede:item}