<?php

$labels = array();
$labels['nosignature'] = 'Нет информации и подписи';
$labels['noauthresults'] = 'Подпись найдена, но нет заголовка результата аутентификации. Проблемы конфигурации сервера?';
$labels['signaturepass'] = 'Действительные подписи от домена отправителя. Подтверждено ';
$labels['partialpass'] = 'Некоторые подписи недействительны, но как минимум одна действительна для домена отправителя. Подтверждено ';
$labels['thirdparty'] = 'Подписано третьим лицом, подпись присутствует, но для домена, отличного от адреса отправителя. Подтверждено ';
$labels['temporaryinvalid'] = 'Подпись (временно) недействительна! Подтверждено ';
$labels['invalidsignature'] = 'Подпись недействительна! Подтверждено ';

$labels['for'] = 'для';
$labels['by'] = '-';

$labels['section_title']  = 'Статус аутентификации';
$labels['column_title']  = 'Результат аутентификации';

$labels['title_enable_column']  = 'Включить столбец';
$labels['label_enable_column']  = 'Включить столбец с результатом аутентификации в список сообщений';
$labels['label_fallback_verifier'] = 'Использовать внутреннюю DKIM проверку (если подпись найдена, но нет заголовка результата аутентификации)';

$labels['title_trusted_mtas'] = 'Доверенные MTA';
$labels['label_trusted_mtas'] = 'Список разделенных запятыми authserv-id МТА, которым вы доверяете. Будут показаны только результаты от этих MTA';

$labels['title_include_status'] = 'Показывать только следующие статусы';
$labels['label_include_status1']  = 'Подпись не найдена';
$labels['label_include_status2']  = 'Подпись найдена, но нет заголовка результата аутентификации';
$labels['label_include_status4']  = 'Все подписи прошли валидацию';
$labels['label_include_status8']  = 'Как минимум одна подпись прошла валидацию';
$labels['label_include_status16']  = 'Подпись третьей стороны';
$labels['label_include_status32']  = 'Подписание временно невозможно';
$labels['label_include_status64']  = 'Подписание постоянно невозможно';

?>
